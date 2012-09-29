timeadd
=======

A simple command-line utility for performing time arithmetic. 

The utility expects two arguments:

   * a string containing a time, formatted as follows: HH:MM:SS
   * an integer number of seconds to add to the specified time (the value can be either positive or negative)

The utility prints the resulting time to stdout. Examples:

<pre>
    timeadd 00:23:49 15
    > 00:24:04

    timeadd 00:10:00 -605
    > -00:00:05
</pre>
