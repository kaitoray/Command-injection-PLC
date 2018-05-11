# attack-PLC
SCADA penetration tests

Attack Steps
1. Create windows socket
2. Connect to the PLC (serever)
3. Send message ask PLC for register session number
4. Send connection management message ask for connection ID
5. Monitor different keyboard input
6. Conduct different command based on the input

Different commands

Manual Mode						 m or M
Inside speed					 1,2,3,4
Outside speed					 6,7,8,9
Emergency stop					 0
Inside clockwise				 i or I
Inside counter clockwise		 u or U
Outside clockwise				 o or O
Outside counter clockwise		 p or P
Change track to cross			 x or X
Change track to parallel		 z or Z

Auto Mode						 a or A
To station 2					 s or S
To station 3					 d or D
To station 4					 f or F