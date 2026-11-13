/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_0020C62C;
extern unsigned int D_0024A704;
extern int func_02A1E8(unsigned int);
extern void func_0B6E38(int);
void func_04B870(int amount) {
 if(func_02A1E8(6)) *(unsigned int *)(D_0020C62C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_0020C62C+0x1C68)+=amount;
 func_0B6E38(90);
 D_0024A704+=amount;
 if(*(unsigned int *)(D_0020C62C+0x1C68)>99999999) *(unsigned int *)(D_0020C62C+0x1C68)=99999999;
}
