#Build from stratch

If you can help to fully document this page, or just add additional detail please let us know on the rcgroups [forum](http://www.rcgroups.com/forums/showthread.php?t=2165676).

## Bill of materials
If this is the option you are following, then you must have a pretty good idea of what you are doing.   Check the BOM for the DIY PCB version of the hardware as a starting point.  You can find the link [here](Module_Build_yourself_PCB.md).

The Arduino Pro-Mini is available many places online.  Check Sparkfun (the original developers of the Pro-Mini) page [here](https://www.sparkfun.com/products/11113)

A module case that fits your receiver like the one [here](https://www.xtremepowersystems.net/proddetail.php?prod=XPS-J1CASE)  
 <img src="https://www.xtremepowersystems.net/prodimages/j1case.jpg" width="200" height="180" />  
  or you can 3D print your own from a selection on Thingiverse ([Example 1](http://www.thingiverse.com/thing:1852868) [Example 2](http://www.thingiverse.com/thing:1661833)).  
 [<img src="http://thingiverse-production-new.s3.amazonaws.com/renders/55/1c/cb/0a/e4/5d2c2b06be7f3f6f8f0ab4638dd7c6fc_preview_featured.jpg" width="250" height="200" /> ](http://www.thingiverse.com/thing:1852868)

You will require a second Arduino or a FTDI (USB to TTL serial) cable to program the Pro-Mini. Like the one [here](https://www.sparkfun.com/products/9717).  **Make sure you get only a 3.3V FTDI cable - or you will fry your 3.3V RF modules when you connect it up.**

##Reference Schematic <a name="Schematic"></a>
Here is the schematic you can use to troubleshoot the module
<img src="images/DIY_Mulitprotocol_Module_Schematic.jpeg" width="1000" height="500" /> 

##Compiling and programming
Follow the instruction on the [Compiling and programming page](Compiling.md)
