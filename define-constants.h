// Definition of memory addresses for SysTick timer registers
//
//            |                        Bits                                |
// Address    | 31-24  | 23-17  |   16   | 15-3 |   2     |   1   |   0    |     Name 
// $E000E010  |   0    |  0     | COUNT  |  0   | CLK_SRC | INTEN | ENABLE | NVIC_ST_CTRL_R
// $E000E014  |   0    |           24-bit RELOAD value                     | NVIC_ST_RELOAD_R
// $E000E018  |   0    |        24-bit CURRENT value of SysTick counter    | NVIC_ST_CURRENT_R   


#define NVIC_ST_CTRL_R      (*((volatile unsigned long *)0xE000E010)) // SysTick Control and Status Register
#define NVIC_ST_RELOAD_R    (*((volatile unsigned long *)0xE000E014)) // RELOAD Register
#define NVIC_ST_CURRENT_R   (*((volatile unsigned long *)0xE000E018)) // CURRENT Register
