/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001E2EAC;
extern unsigned int D_0021C604;
extern int func_0287D8(unsigned int);
extern void func_0B1920(int);
void func_049D08(int amount) {
 if(func_0287D8(6)) *(unsigned int *)(D_001E2EAC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001E2EAC+0x1C68)+=amount;
 func_0B1920(90);
 D_0021C604+=amount;
 if(*(unsigned int *)(D_001E2EAC+0x1C68)>99999999) *(unsigned int *)(D_001E2EAC+0x1C68)=99999999;
}
