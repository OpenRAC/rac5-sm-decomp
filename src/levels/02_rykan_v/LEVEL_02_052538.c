/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_00208C2C;
extern unsigned int D_00246D84;
extern int func_02ABB8(unsigned int);
extern void func_0BD960(int);
void func_052538(int amount) {
 if(func_02ABB8(6)) *(unsigned int *)(D_00208C2C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_00208C2C+0x1C68)+=amount;
 func_0BD960(90);
 D_00246D84+=amount;
 if(*(unsigned int *)(D_00208C2C+0x1C68)>99999999) *(unsigned int *)(D_00208C2C+0x1C68)=99999999;
}
