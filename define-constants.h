// Definition of memory addresses for SysTick timer registers
> |:aaa:|
// | Address  | :31-24: | :23-17:|:16:|
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |


// Address    31-24   23-17   16    15-3    2        1      0         Name 
// $E000E010     0      0    Count    0   CLK_SRC  INTEN  ENABLE  NVIC_ST_CTRL_R
First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column


// | Command | Description |
// | --- | --- |
// | git status | List all new or modified files |
// | git diff | Show file differences that haven't been staged |


#define NVIC_ST_CTRL_R      (*((volatile unsigned long *)0xE000E010)) // SysTick Control and Status Register
#define NVIC_ST_RELOAD_R    (*((volatile unsigned long *)0xE000E014)) // RELOAD Register
#define NVIC_ST_CURRENT_R   (*((volatile unsigned long *)0xE000E018)) // CURRENT Register
