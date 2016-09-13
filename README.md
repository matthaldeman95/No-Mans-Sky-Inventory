#### No Mans Sky Inventory System

A tool that allows a user to enter and maintain their inventory and view which component blueprints they can build.  

In the inventory window, enter the held number of each element/component, hit enter or press Ok to update inventory.  Press close to properly close application.

In the Blueprint window, use boxes to select which types of blueprints you want to view; selecting one of the main classes of these opens up another subclass checkbox list.  Blueprints will be green if they can be produced with the current inventory, and red if they cannot.  Individual components/elements are also highlighted in these colors.  

### Command line in inventory window

Most of the functionality comes from the command line.  Here, users can add or remove amounts of elements from inventory, pin blueprints to remain at the top of the Blueprint screen, and "build" the blueprints

## Add/Remove

Use "a" or "r" as a command to add or remove elements, followed by the number to add or remove, then some substring of the element, then hit Enter. 

Examples:

				a aluminium 50 	#adds 50 aluminium to inventory
				
				r chrys 50 	#removes 50 chrysonite from inventory

				a microden 2 	#adds 2 microdensity fabrics

If the substring entered can be found in the names of two inventory items, such as "power" found in both "power canister" and "power gel", or "idium" found in both "heridium" and "iridium", it will default to the first one alphabetically.  Longer substring inputs are therefore recommended to be more specific.  

## Pin Blueprints

Use "p" followed by a substring of a blueprint name to pin that blueprint to the top of the Blueprint window.  

				p Carite 	#Pins Carite Sheet

As before, substrings found in multiple blueprint names will default to first alphetically.  Must be specific in the case of upgrades that share names

				p Aeration Membrane Tau		#Pins Aeration Membrane Tau
				p Aeration Membrane		#Pins A.M. sigma
				p Membrane Theta		#Pins theta

To unpin a blueprint, use the command again

				p Carite 	#Pins carite sheet
				p Carite	#unpins carite sheet

## Build Blueprint

Use "b" followed by a substring of a blueprint name to try to "build" the blueprint.  If all required elements are in the inventory, this removes the required amount of each element/component to build that blueprint, and adds one of the product to the inventory if it is a normal inventory item (building Antimatter adds 1 Antimatter to inventory, building a suit upgrade adds nothing since it is not found in the inventory).  If user does not have sufficient materials, nothing happens.

				b Antimatter	#Removes 1 Electron Vapor, 50 Heridium, and 20 Zinc from inventory, adds 1 Antimatter

### Notes

Not all recipes are present yet; I haven't found all of them because I spent all my time writing this instead of actually playing!  

This is my first attempt at a GUI application using tkinter in Python.  As such, it is hideous and not user-friendly at all.  This was mostly a learning exercise for myself, but I've found it somewhat useful to use while playing the game too.  Hope someone else can find it useful as well!

The working application is the Python version; I've started trying to create a better version using C++ and Qt, but I'm not too great at either of those yet.


