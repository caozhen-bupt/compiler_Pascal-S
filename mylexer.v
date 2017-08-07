#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 35 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 04/12/17
# Time: 21:08:12
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [aA][nN][dD]

    2  [aA][rR][rR][aA][yY]

    3  [bB][eE][gG][iI][nN]

    4  [bB][oO][oO][lL][eE][aA][nN]

    5  [cC][aA][sS][eE]

    6  [cC][hH][aA][rR]

    7  [cC][oO][nN][sS][tT]

    8  [dD][iI][vV]

    9  [dD][oO]

   10  [dD][oO][wW][nN][tT][oO]

   11  [eE][lL][sS][eE]

   12  [eE][nN][dD]

   13  [fF][aA][lL][sS][eE]

   14  [fF][oO][rR]

   15  [fF][uU][nN][cC][tT][iI][oO][nN]

   16  [iI][fF]

   17  [iI][nN][tT][eE][gG][eE][rR]

   18  [mM][oO][dD]

   19  [nN][oO][tT]

   20  [oO][fF]

   21  [oO][rR]

   22  [pP][rR][oO][cC][eE][dD][uU][rR][eE]

   23  [pP][rR][oO][gG][rR][aA][mM]

   24  [rR][eE][aA][dD]

   25  [rR][eE][aA][lL]

   26  [rR][eE][cC][oO][rR][dD]

   27  [rR][eE][pP][eE][aA][tT]

   28  [tT][hH][eE][nN]

   29  [tT][oO]

   30  [tT][rR][uU][eE]

   31  [tT][yY][pP][eE]

   32  [uU][nN][tT][iI][lL]

   33  [vV][aA][rR]

   34  [wW][hH][iI][lL][eE]

   35  [wW][rR][iI][tT][eE]

   36  "="

   37  "<>"

   38  "<"

   39  ">"

   40  "<="

   41  ">="

   42  "+"

   43  "-"

   44  "*"

   45  "/"

   46  ":="

   47  ","

   48  ";"

   49  ":"

   50  "."

   51  ".."

   52  \бо

   53  "["

   54  "]"

   55  "("

   56  ")"

   57  [ \t\r]+

   58  [A-Za-z]([A-Za-z]|[0-9])*

   59  [0-9]+

   60  [0-9]+(\.[0-9]+)?(E[+\-]?[0-9]+)?

   61  [\n]

   62  [\'][A-Za-z][\']

   63  "{"

   64  "(*"

   65  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x0c (2)    goto 3
	0x0d               goto 4
	0x0e - 0x1f (18)   goto 3
	0x20               goto 4
	0x21 - 0x26 (6)    goto 3
	0x27               goto 6
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2e               goto 13
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3a               goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x3f - 0x40 (2)    goto 3
	0x41               goto 21
	0x42               goto 22
	0x43               goto 23
	0x44               goto 24
	0x45               goto 25
	0x46               goto 26
	0x47 - 0x48 (2)    goto 27
	0x49               goto 28
	0x4a - 0x4c (3)    goto 27
	0x4d               goto 29
	0x4e               goto 30
	0x4f               goto 31
	0x50               goto 32
	0x51               goto 27
	0x52               goto 33
	0x53               goto 27
	0x54               goto 34
	0x55               goto 35
	0x56               goto 36
	0x57               goto 37
	0x58 - 0x5a (3)    goto 27
	0x5b               goto 38
	0x5c               goto 3
	0x5d               goto 39
	0x5e - 0x60 (3)    goto 3
	0x61               goto 21
	0x62               goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 27
	0x69               goto 28
	0x6a - 0x6c (3)    goto 27
	0x6d               goto 29
	0x6e               goto 30
	0x6f               goto 31
	0x70               goto 32
	0x71               goto 27
	0x72               goto 33
	0x73               goto 27
	0x74               goto 34
	0x75               goto 35
	0x76               goto 36
	0x77               goto 37
	0x78 - 0x7a (3)    goto 27
	0x7b               goto 40
	0x7c - 0xa0 (37)   goto 3
	0xa1               goto 41
	0xa2 - 0xff (94)   goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x0c (2)    goto 3
	0x0d               goto 4
	0x0e - 0x1f (18)   goto 3
	0x20               goto 4
	0x21 - 0x26 (6)    goto 3
	0x27               goto 6
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2e               goto 13
	0x2f               goto 14
	0x30 - 0x39 (10)   goto 15
	0x3a               goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x3f - 0x40 (2)    goto 3
	0x41               goto 21
	0x42               goto 22
	0x43               goto 23
	0x44               goto 24
	0x45               goto 25
	0x46               goto 26
	0x47 - 0x48 (2)    goto 27
	0x49               goto 28
	0x4a - 0x4c (3)    goto 27
	0x4d               goto 29
	0x4e               goto 30
	0x4f               goto 31
	0x50               goto 32
	0x51               goto 27
	0x52               goto 33
	0x53               goto 27
	0x54               goto 34
	0x55               goto 35
	0x56               goto 36
	0x57               goto 37
	0x58 - 0x5a (3)    goto 27
	0x5b               goto 38
	0x5c               goto 3
	0x5d               goto 39
	0x5e - 0x60 (3)    goto 3
	0x61               goto 21
	0x62               goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 27
	0x69               goto 28
	0x6a - 0x6c (3)    goto 27
	0x6d               goto 29
	0x6e               goto 30
	0x6f               goto 31
	0x70               goto 32
	0x71               goto 27
	0x72               goto 33
	0x73               goto 27
	0x74               goto 34
	0x75               goto 35
	0x76               goto 36
	0x77               goto 37
	0x78 - 0x7a (3)    goto 27
	0x7b               goto 40
	0x7c - 0xa0 (37)   goto 3
	0xa1               goto 41
	0xa2 - 0xff (94)   goto 3


state 3
	match 65


state 4
	0x09               goto 4
	0x0d               goto 4
	0x20               goto 4

	match 57


state 5
	match 61


state 6
	0x41 - 0x5a (26)   goto 42
	0x61 - 0x7a (26)   goto 42

	match 65


state 7
	0x2a               goto 43

	match 55


state 8
	match 56


state 9
	match 44


state 10
	match 42


state 11
	match 47


state 12
	match 43


state 13
	0x2e               goto 44

	match 50


state 14
	match 45


state 15
	0x2e               goto 45
	0x30 - 0x39 (10)   goto 15
	0x45               goto 46

	match 59


state 16
	0x3d               goto 47

	match 49


state 17
	match 48


state 18
	0x3d               goto 48
	0x3e               goto 49

	match 38


state 19
	match 36


state 20
	0x3d               goto 50

	match 39


state 21
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 51
	0x4f - 0x51 (3)    goto 27
	0x52               goto 52
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 51
	0x6f - 0x71 (3)    goto 27
	0x72               goto 52
	0x73 - 0x7a (8)    goto 27

	match 58


state 22
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 53
	0x46 - 0x4e (9)    goto 27
	0x4f               goto 54
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 53
	0x66 - 0x6e (9)    goto 27
	0x6f               goto 54
	0x70 - 0x7a (11)   goto 27

	match 58


state 23
	0x30 - 0x39 (10)   goto 27
	0x41               goto 55
	0x42 - 0x47 (6)    goto 27
	0x48               goto 56
	0x49 - 0x4e (6)    goto 27
	0x4f               goto 57
	0x50 - 0x5a (11)   goto 27
	0x61               goto 55
	0x62 - 0x67 (6)    goto 27
	0x68               goto 56
	0x69 - 0x6e (6)    goto 27
	0x6f               goto 57
	0x70 - 0x7a (11)   goto 27

	match 58


state 24
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 58
	0x4a - 0x4e (5)    goto 27
	0x4f               goto 59
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 58
	0x6a - 0x6e (5)    goto 27
	0x6f               goto 59
	0x70 - 0x7a (11)   goto 27

	match 58


state 25
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4b (11)   goto 27
	0x4c               goto 60
	0x4d               goto 27
	0x4e               goto 61
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 60
	0x6d               goto 27
	0x6e               goto 61
	0x6f - 0x7a (12)   goto 27

	match 58


state 26
	0x30 - 0x39 (10)   goto 27
	0x41               goto 62
	0x42 - 0x4e (13)   goto 27
	0x4f               goto 63
	0x50 - 0x54 (5)    goto 27
	0x55               goto 64
	0x56 - 0x5a (5)    goto 27
	0x61               goto 62
	0x62 - 0x6e (13)   goto 27
	0x6f               goto 63
	0x70 - 0x74 (5)    goto 27
	0x75               goto 64
	0x76 - 0x7a (5)    goto 27

	match 58


state 27
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 58


state 28
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x45 (5)    goto 27
	0x46               goto 65
	0x47 - 0x4d (7)    goto 27
	0x4e               goto 66
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x65 (5)    goto 27
	0x66               goto 65
	0x67 - 0x6d (7)    goto 27
	0x6e               goto 66
	0x6f - 0x7a (12)   goto 27

	match 58


state 29
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 67
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 67
	0x70 - 0x7a (11)   goto 27

	match 58


state 30
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 68
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 68
	0x70 - 0x7a (11)   goto 27

	match 58


state 31
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x45 (5)    goto 27
	0x46               goto 69
	0x47 - 0x51 (11)   goto 27
	0x52               goto 70
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x65 (5)    goto 27
	0x66               goto 69
	0x67 - 0x71 (11)   goto 27
	0x72               goto 70
	0x73 - 0x7a (8)    goto 27

	match 58


state 32
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 71
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 71
	0x73 - 0x7a (8)    goto 27

	match 58


state 33
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 72
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 72
	0x66 - 0x7a (21)   goto 27

	match 58


state 34
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x47 (7)    goto 27
	0x48               goto 73
	0x49 - 0x4e (6)    goto 27
	0x4f               goto 74
	0x50 - 0x51 (2)    goto 27
	0x52               goto 75
	0x53 - 0x58 (6)    goto 27
	0x59               goto 76
	0x5a               goto 27
	0x61 - 0x67 (7)    goto 27
	0x68               goto 73
	0x69 - 0x6e (6)    goto 27
	0x6f               goto 74
	0x70 - 0x71 (2)    goto 27
	0x72               goto 75
	0x73 - 0x78 (6)    goto 27
	0x79               goto 76
	0x7a               goto 27

	match 58


state 35
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 77
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 77
	0x6f - 0x7a (12)   goto 27

	match 58


state 36
	0x30 - 0x39 (10)   goto 27
	0x41               goto 78
	0x42 - 0x5a (25)   goto 27
	0x61               goto 78
	0x62 - 0x7a (25)   goto 27

	match 58


state 37
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x47 (7)    goto 27
	0x48               goto 79
	0x49 - 0x51 (9)    goto 27
	0x52               goto 80
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x67 (7)    goto 27
	0x68               goto 79
	0x69 - 0x71 (9)    goto 27
	0x72               goto 80
	0x73 - 0x7a (8)    goto 27

	match 58


state 38
	match 53


state 39
	match 54


state 40
	match 63


state 41
	0xae               goto 81

	match 65


state 42
	0x27               goto 82


state 43
	match 64


state 44
	match 51


state 45
	0x30 - 0x39 (10)   goto 83


state 46
	0x2b               goto 84
	0x2d               goto 84
	0x30 - 0x39 (10)   goto 85


state 47
	match 46


state 48
	match 40


state 49
	match 37


state 50
	match 41


state 51
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 86
	0x45 - 0x5a (22)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 86
	0x65 - 0x7a (22)   goto 27

	match 58


state 52
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 87
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 87
	0x73 - 0x7a (8)    goto 27

	match 58


state 53
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x46 (6)    goto 27
	0x47               goto 88
	0x48 - 0x5a (19)   goto 27
	0x61 - 0x66 (6)    goto 27
	0x67               goto 88
	0x68 - 0x7a (19)   goto 27

	match 58


state 54
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 89
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 89
	0x70 - 0x7a (11)   goto 27

	match 58


state 55
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x52 (18)   goto 27
	0x53               goto 90
	0x54 - 0x5a (7)    goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 90
	0x74 - 0x7a (7)    goto 27

	match 58


state 56
	0x30 - 0x39 (10)   goto 27
	0x41               goto 91
	0x42 - 0x5a (25)   goto 27
	0x61               goto 91
	0x62 - 0x7a (25)   goto 27

	match 58


state 57
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 92
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 92
	0x6f - 0x7a (12)   goto 27

	match 58


state 58
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x55 (21)   goto 27
	0x56               goto 93
	0x57 - 0x5a (4)    goto 27
	0x61 - 0x75 (21)   goto 27
	0x76               goto 93
	0x77 - 0x7a (4)    goto 27

	match 58


state 59
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x56 (22)   goto 27
	0x57               goto 94
	0x58 - 0x5a (3)    goto 27
	0x61 - 0x76 (22)   goto 27
	0x77               goto 94
	0x78 - 0x7a (3)    goto 27

	match 9


state 60
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x52 (18)   goto 27
	0x53               goto 95
	0x54 - 0x5a (7)    goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 95
	0x74 - 0x7a (7)    goto 27

	match 58


state 61
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 96
	0x45 - 0x5a (22)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 96
	0x65 - 0x7a (22)   goto 27

	match 58


state 62
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4b (11)   goto 27
	0x4c               goto 97
	0x4d - 0x5a (14)   goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 97
	0x6d - 0x7a (14)   goto 27

	match 58


state 63
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 98
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 98
	0x73 - 0x7a (8)    goto 27

	match 58


state 64
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 99
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 99
	0x6f - 0x7a (12)   goto 27

	match 58


state 65
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 16


state 66
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 100
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 100
	0x75 - 0x7a (6)    goto 27

	match 58


state 67
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 101
	0x45 - 0x5a (22)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 101
	0x65 - 0x7a (22)   goto 27

	match 58


state 68
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 102
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 102
	0x75 - 0x7a (6)    goto 27

	match 58


state 69
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 20


state 70
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 21


state 71
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 103
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 103
	0x70 - 0x7a (11)   goto 27

	match 58


state 72
	0x30 - 0x39 (10)   goto 27
	0x41               goto 104
	0x42               goto 27
	0x43               goto 105
	0x44 - 0x4f (12)   goto 27
	0x50               goto 106
	0x51 - 0x5a (10)   goto 27
	0x61               goto 104
	0x62               goto 27
	0x63               goto 105
	0x64 - 0x6f (12)   goto 27
	0x70               goto 106
	0x71 - 0x7a (10)   goto 27

	match 58


state 73
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 107
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 107
	0x66 - 0x7a (21)   goto 27

	match 58


state 74
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 29


state 75
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x54 (20)   goto 27
	0x55               goto 108
	0x56 - 0x5a (5)    goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 108
	0x76 - 0x7a (5)    goto 27

	match 58


state 76
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4f (15)   goto 27
	0x50               goto 109
	0x51 - 0x5a (10)   goto 27
	0x61 - 0x6f (15)   goto 27
	0x70               goto 109
	0x71 - 0x7a (10)   goto 27

	match 58


state 77
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 110
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 110
	0x75 - 0x7a (6)    goto 27

	match 58


state 78
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 111
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 111
	0x73 - 0x7a (8)    goto 27

	match 58


state 79
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 112
	0x4a - 0x5a (17)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 112
	0x6a - 0x7a (17)   goto 27

	match 58


state 80
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 113
	0x4a - 0x5a (17)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 113
	0x6a - 0x7a (17)   goto 27

	match 58


state 81
	match 52


state 82
	match 62


state 83
	0x30 - 0x39 (10)   goto 83
	0x45               goto 46

	match 60


state 84
	0x30 - 0x39 (10)   goto 85


state 85
	0x30 - 0x39 (10)   goto 85

	match 60


state 86
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 1


state 87
	0x30 - 0x39 (10)   goto 27
	0x41               goto 114
	0x42 - 0x5a (25)   goto 27
	0x61               goto 114
	0x62 - 0x7a (25)   goto 27

	match 58


state 88
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 115
	0x4a - 0x5a (17)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 115
	0x6a - 0x7a (17)   goto 27

	match 58


state 89
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4b (11)   goto 27
	0x4c               goto 116
	0x4d - 0x5a (14)   goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 116
	0x6d - 0x7a (14)   goto 27

	match 58


state 90
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 117
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 117
	0x66 - 0x7a (21)   goto 27

	match 58


state 91
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 118
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 118
	0x73 - 0x7a (8)    goto 27

	match 58


state 92
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x52 (18)   goto 27
	0x53               goto 119
	0x54 - 0x5a (7)    goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 119
	0x74 - 0x7a (7)    goto 27

	match 58


state 93
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 8


state 94
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 120
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 120
	0x6f - 0x7a (12)   goto 27

	match 58


state 95
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 121
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 121
	0x66 - 0x7a (21)   goto 27

	match 58


state 96
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 12


state 97
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x52 (18)   goto 27
	0x53               goto 122
	0x54 - 0x5a (7)    goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 122
	0x74 - 0x7a (7)    goto 27

	match 58


state 98
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 14


state 99
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x42 (2)    goto 27
	0x43               goto 123
	0x44 - 0x5a (23)   goto 27
	0x61 - 0x62 (2)    goto 27
	0x63               goto 123
	0x64 - 0x7a (23)   goto 27

	match 58


state 100
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 124
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 124
	0x66 - 0x7a (21)   goto 27

	match 58


state 101
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 18


state 102
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 19


state 103
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x42 (2)    goto 27
	0x43               goto 125
	0x44 - 0x46 (3)    goto 27
	0x47               goto 126
	0x48 - 0x5a (19)   goto 27
	0x61 - 0x62 (2)    goto 27
	0x63               goto 125
	0x64 - 0x66 (3)    goto 27
	0x67               goto 126
	0x68 - 0x7a (19)   goto 27

	match 58


state 104
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 127
	0x45 - 0x4b (7)    goto 27
	0x4c               goto 128
	0x4d - 0x5a (14)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 127
	0x65 - 0x6b (7)    goto 27
	0x6c               goto 128
	0x6d - 0x7a (14)   goto 27

	match 58


state 105
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 129
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 129
	0x70 - 0x7a (11)   goto 27

	match 58


state 106
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 130
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 130
	0x66 - 0x7a (21)   goto 27

	match 58


state 107
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 131
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 131
	0x6f - 0x7a (12)   goto 27

	match 58


state 108
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 132
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 132
	0x66 - 0x7a (21)   goto 27

	match 58


state 109
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 133
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 133
	0x66 - 0x7a (21)   goto 27

	match 58


state 110
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 134
	0x4a - 0x5a (17)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 134
	0x6a - 0x7a (17)   goto 27

	match 58


state 111
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 33


state 112
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4b (11)   goto 27
	0x4c               goto 135
	0x4d - 0x5a (14)   goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 135
	0x6d - 0x7a (14)   goto 27

	match 58


state 113
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 136
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 136
	0x75 - 0x7a (6)    goto 27

	match 58


state 114
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x58 (24)   goto 27
	0x59               goto 137
	0x5a               goto 27
	0x61 - 0x78 (24)   goto 27
	0x79               goto 137
	0x7a               goto 27

	match 58


state 115
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 138
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 138
	0x6f - 0x7a (12)   goto 27

	match 58


state 116
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 139
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 139
	0x66 - 0x7a (21)   goto 27

	match 58


state 117
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 5


state 118
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 6


state 119
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 140
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 140
	0x75 - 0x7a (6)    goto 27

	match 58


state 120
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 141
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 141
	0x75 - 0x7a (6)    goto 27

	match 58


state 121
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 11


state 122
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 142
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 142
	0x66 - 0x7a (21)   goto 27

	match 58


state 123
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 143
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 143
	0x75 - 0x7a (6)    goto 27

	match 58


state 124
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x46 (6)    goto 27
	0x47               goto 144
	0x48 - 0x5a (19)   goto 27
	0x61 - 0x66 (6)    goto 27
	0x67               goto 144
	0x68 - 0x7a (19)   goto 27

	match 58


state 125
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 145
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 145
	0x66 - 0x7a (21)   goto 27

	match 58


state 126
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 146
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 146
	0x73 - 0x7a (8)    goto 27

	match 58


state 127
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 24


state 128
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 25


state 129
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 147
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 147
	0x73 - 0x7a (8)    goto 27

	match 58


state 130
	0x30 - 0x39 (10)   goto 27
	0x41               goto 148
	0x42 - 0x5a (25)   goto 27
	0x61               goto 148
	0x62 - 0x7a (25)   goto 27

	match 58


state 131
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 28


state 132
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 30


state 133
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 31


state 134
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4b (11)   goto 27
	0x4c               goto 149
	0x4d - 0x5a (14)   goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 149
	0x6d - 0x7a (14)   goto 27

	match 58


state 135
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 150
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 150
	0x66 - 0x7a (21)   goto 27

	match 58


state 136
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 151
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 151
	0x66 - 0x7a (21)   goto 27

	match 58


state 137
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 2


state 138
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 3


state 139
	0x30 - 0x39 (10)   goto 27
	0x41               goto 152
	0x42 - 0x5a (25)   goto 27
	0x61               goto 152
	0x62 - 0x7a (25)   goto 27

	match 58


state 140
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 7


state 141
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 153
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 153
	0x70 - 0x7a (11)   goto 27

	match 58


state 142
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 13


state 143
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x48 (8)    goto 27
	0x49               goto 154
	0x4a - 0x5a (17)   goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 154
	0x6a - 0x7a (17)   goto 27

	match 58


state 144
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 155
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 155
	0x66 - 0x7a (21)   goto 27

	match 58


state 145
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 156
	0x45 - 0x5a (22)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 156
	0x65 - 0x7a (22)   goto 27

	match 58


state 146
	0x30 - 0x39 (10)   goto 27
	0x41               goto 157
	0x42 - 0x5a (25)   goto 27
	0x61               goto 157
	0x62 - 0x7a (25)   goto 27

	match 58


state 147
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x43 (3)    goto 27
	0x44               goto 158
	0x45 - 0x5a (22)   goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 158
	0x65 - 0x7a (22)   goto 27

	match 58


state 148
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x53 (19)   goto 27
	0x54               goto 159
	0x55 - 0x5a (6)    goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 159
	0x75 - 0x7a (6)    goto 27

	match 58


state 149
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 32


state 150
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 34


state 151
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 35


state 152
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 160
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 160
	0x6f - 0x7a (12)   goto 27

	match 58


state 153
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 10


state 154
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4e (14)   goto 27
	0x4f               goto 161
	0x50 - 0x5a (11)   goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 161
	0x70 - 0x7a (11)   goto 27

	match 58


state 155
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 162
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 162
	0x73 - 0x7a (8)    goto 27

	match 58


state 156
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x54 (20)   goto 27
	0x55               goto 163
	0x56 - 0x5a (5)    goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 163
	0x76 - 0x7a (5)    goto 27

	match 58


state 157
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4c (12)   goto 27
	0x4d               goto 164
	0x4e - 0x5a (13)   goto 27
	0x61 - 0x6c (12)   goto 27
	0x6d               goto 164
	0x6e - 0x7a (13)   goto 27

	match 58


state 158
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 26


state 159
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 27


state 160
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 4


state 161
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x4d (13)   goto 27
	0x4e               goto 165
	0x4f - 0x5a (12)   goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 165
	0x6f - 0x7a (12)   goto 27

	match 58


state 162
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 17


state 163
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x51 (17)   goto 27
	0x52               goto 166
	0x53 - 0x5a (8)    goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 166
	0x73 - 0x7a (8)    goto 27

	match 58


state 164
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 23


state 165
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 15


state 166
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x44 (4)    goto 27
	0x45               goto 167
	0x46 - 0x5a (21)   goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 167
	0x66 - 0x7a (21)   goto 27

	match 58


state 167
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x61 - 0x7a (26)   goto 27

	match 22


#############################################################################
# Summary
#############################################################################

1 start state(s)
65 expression(s), 167 state(s)


#############################################################################
# End of File
#############################################################################
