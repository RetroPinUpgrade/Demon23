// Here, a define should be made for every lamp on the machine.
// For demonstration, here are some example lamps that are typical
// for different architectures. This section should be deleted
// when implementing a particular machine.

#define LAMP_SHOOT_AGAIN                    0
#define LAMP_LEFT_SPECIAL                   1
#define LAMP_RIGHT_SPECIAL                  2
#define LAMP_2X                             3
#define LAMP_3X                             4
#define LAMP_STAR_1                         5
#define LAMP_STAR_2                         6
#define LAMP_BONUS_1                        7
#define LAMP_BONUS_2                        8
#define LAMP_BONUS_3                        9
#define LAMP_BONUS_4                        10
#define LAMP_BONUS_5                        11
#define LAMP_BONUS_6                        12
#define LAMP_BONUS_7                        13
#define LAMP_BONUS_8                        14
#define LAMP_BONUS_9                        15
#define LAMP_BONUS_10                       17
#define LAMP_BONUS_20                       18
#define LAMP_A                              19
#define LAMP_B                              20
#define LAMP_C                              21
#define LAMP_D                              22
#define LAMP_E                              23
#define LAMP_1                              24
#define LAMP_2                              25
#define LAMP_3                              26
#define LAMP_4                              27
#define LAMP_1_ARROW                        28
#define LAMP_2_ARROW                        29
#define LAMP_3_ARROW                        30
#define LAMP_4_ARROW                        31
#define LAMP_MAGNET_5                       32
#define LAMP_MAGNET_10                      33
#define LAMP_MAGNET_20                      34
#define LAMP_MAGNET_30                      35
#define LAMP_MAGNET_50                      36
#define LAMP_TOP_POP_BUMPER                 37
#define LAMP_LEFT_POP_BUMPER                38
#define LAMP_BOTTOM_POP_BUMPER              39
#define LAMP_GAR_WHEN_LIT                   40
#define LAMP_GOR                            41
#define LAMP_GAR                            42
#define LAMP_SAUCER_10                      43
#define LAMP_SAUCER_15                      44
#define LAMP_SAUCER_EXTRA_BALL              45
#define LAMP_SPINNER                        47
#define LAMP_HEAD_1_PLAYER                  49
#define LAMP_HEAD_2_PLAYERS                 50
#define LAMP_HEAD_3_PLAYERS                 51
#define LAMP_HEAD_4_PLAYERS                 52
#define LAMP_HEAD_MATCH                     53
#define LAMP_HEAD_BALL_IN_PLAY              54
#define LAMP_APRON_CREDITS                  55
#define LAMP_HEAD_PLAYER_1_UP               56
#define LAMP_HEAD_PLAYER_2_UP               57
#define LAMP_HEAD_PLAYER_3_UP               58
#define LAMP_HEAD_PLAYER_4_UP               59
#define LAMP_HEAD_TILT                      60
#define LAMP_HEAD_GAME_OVER                 61
#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  62
#define LAMP_HEAD_HIGH_SCORE                63


#define SW_PLUMB_TILT             0
#define SW_ROLL_TILT              1
#define SW_CREDIT_RESET           2
#define SW_COIN_1                 3
#define SW_COIN_2                 4
#define SW_COIN_3                 5
#define SW_SLAM                   6
#define SW_HIGH_SCORE_RESET       7
#define SW_OUTHOLE                8
#define SW_LEFT_OUTLANE           9
#define SW_LEFT_INLANE            10
#define SW_LEFT_SLING             11
#define SW_LOWER_LEFT_STANDUP     12
#define SW_1_STANDUP              13
#define SW_SAUCER                 14
#define SW_MIDDLE_LEFT_STANDUP    15
#define SW_UPPER_LEFT_STANDUP     16
#define SW_GOR_G                  17
#define SW_GOR_O                  18
#define SW_GOR_R                  19
#define SW_GOR_COMPLETE           20
#define SW_GOR_BEHIND_STANDUP     21
#define SW_MAGNET_SWITCH          22
#define SW_MIDDLE_LOWER_STANDUP   23
#define SW_MIDDLE_UPPER_STANDUP   24
#define SW_A_LANE                 25
#define SW_B_LANE                 26
#define SW_C_LANE                 27
#define SW_PLAYFIELD_TILT         28
#define SW_SPINNER                29
#define SW_2_STANDUP              30
#define SW_3_STANDUP              31
#define SW_4_STANDUP              32
#define SW_RIGHT_OUTLANE          33
#define SW_RIGHT_INLANE           34
#define SW_RIGHT_SLING            35
#define SW_LEFT_POP_BUMPER        36
#define SW_TOP_POP_BUMPER         37
#define SW_BOTTOM_POP_BUMPER      38
#define SW_GAR_BEHIND_STANDUP     39
#define SW_GAR_G                  40
#define SW_GAR_A                  41
#define SW_GAR_R                  42
#define SW_GAR_COMPLETE           43



#define SOL_OUTHOLE                 0
#define SOL_SAUCER                  1
#define SOL_GAR_RESET               2
#define SOL_GOR_RESET               3
#define SOL_MAGNET_RELAY            4
#define SOL_MAGNET_LAMPS            5

#define SOL_KNOCKER                 13

#define SOLCONT_COIN_LOCKOUT        15
#define SOL_TOP_POP_BUMPER          16
#define SOL_LEFT_POP_BUMPER         17
#define SOL_BOTTOM_POP_BUMPER       18
#define SOL_LEFT_SLING              19
#define SOL_RIGHT_SLING             20


#if (RPU_MPU_ARCHITECTURE<10)
// Machines with a -17, -35, 100, and 200 architecture
// almost always have software based switch-triggered solenoids. 
// For those, you can define an array of solenoids and the switches
// that will trigger them:

#define NUM_SWITCHES_WITH_TRIGGERS          3 // total number of solenoid/switch pairs
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 3 // This number should match the define above

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4},
  { SW_POP_BUMPER, SOL_POP_BUMPER, 4}
};
#endif
