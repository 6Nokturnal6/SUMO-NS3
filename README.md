# SUMO-NS3 Project #

---
A traffic simulator by the integration of SUMO and NS3.


### Prequisites:
- SUMO
- NS3 (3.29, All-in-One Version with NetAnim support)

### Usage:
To create the scratch file with animation interface:

``` bash
cd ns3allinone/ns3
cp ./src/mobility/examples/ns2-mobility-trace.cc ./scratch/ns2-mobility-trace.cc
```

Followed by adding the header file to the cc file
```C++
#include "ns3/netanim-module.h"
```
And the following line right above `Simulator::Run()`:
```
AnimationInterface anim("vehicularmobility.xml");
```
To run the NS3 simulation:
```
./waf --run "scratch/ns2-mobility-trace --traceFile=YOUR_TCL_FILE_LOCATION --nodeNum=NODE_NUMBER --duration=100.0 --logFile=ns2-mob.log"
```
The generated xml file could be opened with the GUI NetAnim.

Note that a utility file to obtain the maximum node numer in the tcl file is included in the source files. Simply run:
```
cd this project
./get_max_node "YOUR_TCL_FILE.tcl"
```




