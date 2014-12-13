# So you want to be a menu editor?

We at FrozenSand have made our menu files open source and available for public contribution. You're probably here because you're interested in changing the menus. If you already know what you're doing, feel free to ignore this document. If you want some tips on how to get started, this document might help.

This is by no means an in-depth tutorial to menu editing. It's just meant to help you get your feet wet and maybe explain some of the more basic menu editing concepts. For more comprehensive resources, see the [Additional References](#additional-references) section at the bottom of this document.

****************

## Table of Contents

+ [Introduction](#introduction)
+ [What's all this "Def" nonsense?](#whats-all-this-def-nonsense)
    + [What's the difference between menuDef and itemDef?](#whats-the-difference-between-menudef-and-itemdef)
+ [Diving into itemDefs: making a button](#diving-into-itemdefs-making-a-button)
+ [Diving into itemDefs: analyzing an existing item](#diving-into-itemdefs-analyzing-an-existing-item)
+ [How to test your menu files](#how-to-test-your-menu-files)
    + [Something to remember](#something-to-remember)
+ [Additional References](#additional-references)

****************

## Introduction

The basic unit of a menu is a `.menu` file. Each menu screen you will find in Urban Terror is defined in a `.menu` file, from the options menu to the scoreboard. For example, the main menu can be found in the `main.menu` file (duh!). Inside each `.menu` file, there are some global options for that particular menu, and then a series of definitions for all the different elements that that menu is responsible for. Let's take a look at the first few lines of `password.menu`:

```
#include "ui/menudef.h"

{
	\\ PASSWORD POPUP MENU \\

	menuDef {
		name "password_popmenu"
		visible 0
		fullscreen 0
		rect 204 122 235 235
```

That first line that reads `#include "ui/menudef.h"` tells the game to look at the `menudef.h` file so that it knows what you're talking about when you tell it to draw something, like a button using `ITEM_TYPE_BUTTON`. As a general rule, always have this as the first line in your `.menu` files.


## What's all this "Def" nonsense?

Def means definition. There are two types of definitions that you'll encounter: `menuDef` and `itemDef`. Each definition that you find has the same structure:

```
whateverDef {
    name "namegoeshere"
    rect 200 100 300 300
    ...
}
```

It starts with the type of definition followed by a set of parameters that describe everything about that particular menu or item. Every parameter should have its own line, and looks like this:

```
parameterName value (maybe another value) (and another) ...
```

### What's the difference between menuDef and itemDef?

A menuDef is a group of itemDefs. They're used to define the position of the menu if it's a submenu, the name of the menu in order to connect different menus together, among other things. An itemDef is one of many that can be found inside a menuDef. They represent every little item you might find on a menu screen, such as buttons, text, lists, etc.


## Diving into itemDefs: making a button

Everything you see in a menu is defined using itemDefs. Buttons are a part of "everything", so let's start by creating one of those.

```
itemDef {
    name CoolButton
    type ITEM_TYPE_BUTTON
}
```

Great, but now what? This itemDef won't do anything. All it does is tell us that this button exists. Let's give the button some text and a location.

```
itemDef {
    name CoolButton
    type ITEM_TYPE_BUTTON
    text "Click me!"
    rect 200 300 80 40 // rect x y width height
    visible 1
}
```

> **A note about coordinates**: coordinates are defined based on a screen size of 640px * 480px.
> This might seem confusing at first, but it allows you to make menu files that work with any screen size.

> **Another note**: You must add `visible 1` if you want your item to be visible

Cool, but it's just some text. It's not a button yet, it doesn't do anything. Let's give it a background and make it play some sound when we click it.

```
itemDef {
    name CoolButton
    type ITEM_TYPE_BUTTON
    text "Click me!"
    rect 200 300 80 40
    style WINDOW_STYLE_FILLED
    backcolor 1 0 0 0.5
    action { play "sound/weapons/zm300/lr.wav" }
    visible 1
}
```

The `style` keyword tells the game what kind of background the button should have. Other possible values are `WINDOW_STYLE_EMPTY` (nothing, the default), and `WINDOW_STYLE_SHADER` (to use a background image). The `action` keyword tells the game what to do when you click the button. You can use buttons to open menus, close menus, play sounds, and all sorts of other things!

This concludes the extremely short button tutorial. Obviously it's not enough to gain a thorough understanding of how menu files work, but creating the button is a good "getting your feet wet" kind of exercise. You should play around with some of the values to see parameters change which aspect of how the button is drawn.


## Diving into itemDefs: analyzing an existing item

Let's look at a button that already exists and go through it line-by-line. We'll use the "Smaller Gun" option in the Gun Settings menu.

```
itemDef {
    cvartest cg_drawhands
    hideCvar { "0" }
    name gunsize
    group gun
    type ITEM_TYPE_YESNO
    Action { play "sound/misc/kcaction.wav" }
    text "Smaller Gun:"
    cvar "cg_gunSize"
    rect 172 40 250 20
    textalign 0
    textalignx 10
    textaligny 15
    textscale .25
    visible 1
}
```

```
    cvartest cg_drawhands
    hideCvar { "0" }
```
`cvartest` goes hand in hand with other options like `hideCvar` and `showCvar`. `cvartest` tells the game to use the value of the specified cvar for testing. `hideCvar` will tell the game to hide this particular item if the tested cvar matches a particular value, in this case `0`. For the Smaller Gun setting, we want to hide it if `cg_drawhands` is `0`, because the option for a smaller gun is not needed when the gun is hidden entirely.

```
    name gunsize
    group gun
```
`name` and `group` can be used to refer to individual or multiple itemDefs or menuDefs. You can use names and groups to do things like hide items or show them. In this case, we're putting this `gunsize` item in the `gun` group. All of the other gun-related options, like the hitting info, are also in this gun group so that they can be hidden when you're not in the "Gun Settings" section of the options menu.

```
    type ITEM_TYPE_YESNO
```
The `type` keyword tells the game what type of item it's dealing with. The `type` of the button we made before is `ITEM_TYPE_BUTTON`. In this case, `ITEM_TYPE_YESNO` is used when changing the value of a cvar. It will toggle it between `1` and `0`, and display the corresponding `Yes` or `No`.

```
    Action { play "sound/misc/kcaction.wav" }
    text "Smaller Gun:"
```
`action` is a keyword we've visited before. It tells the game what to do when you click on the item. In most cases, you'll want to make a click play a sound for user feedback. We've also seen the `text` keyword before. Its function is to set the text that the item displays.

```
    cvar "cg_gunSize"
```
The `cvar` keyword tells the game what cvar is being affected for certain item types that affect cvars.

```
    rect 172 40 250 20
```
`rect` is another keyword we've already seen. It follows the format `rect x y width height` where the coordinates are specified as if the screen were 640px * 480px.

```
    textalign 0
    textalignx 10
    textaligny 15
    textscale .25
```
These are some text options, as you can probably tell. `textalign` will specify what part of the text is aligned with `textalignx` and `textaligny`: `0` for left, `1` for center, and `2` for right. If you don't want to remember that, you can use `ITEM_ALIGN_LEFT`, `ITEM_ALIGN_CENTER`, and `ITEM_ALIGN_RIGHT`. `textalignx` and `textaligny` will tell the game where to align the text. In this case, the left edge of the text will be aligned to the point `(10, 15)`. Finally, `textscale` tells the game how big the text should be. The size of text with `textscale 1` is 48 pixels.

```
    visible 1
```
Lastly, `visible` tells the game whether the item should be visible or not. You cannot interact with an item that has `visible` turned off.

For some more in-depth and comprehensive references, check out the links found in the [Additional References](#additional-references) section of this document.

****************

## How to test your menu files

Inevitably, you're going to want to see how your menus look when they're actually loaded. Staring at their code all day won't make them look right, so let's look at how to test them out. There are two ways you can do this. Firstly, you can simply replace the existing `.menu` files inside `zUrT42_0009.pk3`, but if you choose to do this, you won't be able to connect to pure servers. The second option, which is recommended, is to create a new pk3 file with your menus in it:
+ Navigate to the `ui` directory from this repository, and archive it with WinZip or whatever your preferred tool is
+ Make sure to archive the `ui` folder *with* everything in it and not just the `.menu` files themselves. The `ui` folder should be inside the zip you've just created
+ The name of this zip file must come after `zUrT42_0009` alphabetically, so it's recommended to name it something like `zzz_menu_test` or something.
+ Change the file extension from `.zip` to `.pk3` if you haven't already
+ Put the `.pk3` in your `q3ut4` folder
+ Start Urban Terror

If you've followed these instructions properly and all goes well, you should be able to see whatever changes you've made. You will still be able to connect to pure servers as long as you haven't touched the original `zUrT42_0009.pk3`.

### Something to remember

There are a lot of `.menu` files in here already, but if for whatever reason you want to rename them, remove them, or add some, you'll have to modify the `menus.txt` file or the `ingame.txt` file. These tell the game which menu files it needs to load in certain scenarios. If you don't remember about these, you might run into some problems.

****************

## Additional References

Here are some more resources that could be of help when writing menu files

+ [Quake III: Team Arena Menu Files](https://linux.ucla.edu/~phaethon/q3tamenu/q3tamenu-single.html) - A one stop shop for most things menu file-related. Every possible option is listed here.
+ [Using Team Arena Scripted Menus in Vanilla Quake 3](http://rfactory.org/scripting.html) - A thorough tutorial to menu files. This is well worth the read.