/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_0023CB2C;
extern unsigned int D_0027EB04;
extern int func_02A968(unsigned int);
extern void func_0C1F40(int);
void func_052718(int amount) {
 if(func_02A968(6)) *(unsigned int *)(D_0023CB2C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_0023CB2C+0x1C68)+=amount;
 func_0C1F40(90);
 D_0027EB04+=amount;
 if(*(unsigned int *)(D_0023CB2C+0x1C68)>99999999) *(unsigned int *)(D_0023CB2C+0x1C68)=99999999;
}
