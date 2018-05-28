# Command injection PLC
SCADA railway system penetration tests

Before debugging the program in visual studio
1. Add source files and header files
2. Click on the project name and select the properties--Linker--General, change the Enable Incremental Linking to "NO"
3. Click on the project name and select the properties--Linker--Input, add the "ws2_32.lib" to Additional Dependencies and select the OK button

Attack Steps
1. Create windows socket
2. Connect to the PLC (serever)
3. Send message ask PLC for register session number
4. Send connection management message ask for connection ID
5. Monitor different keyboard input
6. Conduct different command based on the input

Different commands

1. Manual Mode------m or M
2. Inside speed------1,2,3,4
3. Outside speed------6,7,8,9
4. Emergency stop------0
5. Inside clockwise------i or I
6. Inside counter clockwise------u or U
7. Outside clockwise------o or O
8. Outside counter clockwise------p or P
9. Change track to cross------x or X
10. Change track to parallel------z or Z

11. Auto Mode------a or A
12. To station 2------s or S
13. To station 3------d or D
14. To station 4------f or F
