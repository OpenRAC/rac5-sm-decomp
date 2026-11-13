/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001F3FAC;
extern unsigned int D_0022F884;
extern int func_02A3F0(unsigned int);
extern void func_0B7050(int);
void func_04D610(int amount) {
 if(func_02A3F0(6)) *(unsigned int *)(D_001F3FAC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001F3FAC+0x1C68)+=amount;
 func_0B7050(90);
 D_0022F884+=amount;
 if(*(unsigned int *)(D_001F3FAC+0x1C68)>99999999) *(unsigned int *)(D_001F3FAC+0x1C68)=99999999;
}
