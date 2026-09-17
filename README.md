# 3.3V-NPN-BJT-DC-AC-Inverter
This is a NPN BJT based DC-AC Inverter, using a H-bridge configuration. For use with low input voltages such as 3.3V or 5V, it uses an Arduino Uno R3 running simple SPWM code. Tested at currents below 0.2A, it produces a RMS AC voltage of approximately 1.3V at 50Hz. The AC waveform is slightly noisy, but as expected due to the use of BJT's with just output filter capacitors. 


Parts List:

4x 2N3904

4x 1k Ohm Resistors

2x 100uF Electrolytic Capacitors

Arduino Uno R3
