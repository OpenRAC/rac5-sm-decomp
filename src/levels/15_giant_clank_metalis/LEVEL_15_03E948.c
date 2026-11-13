/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_00148C2C;
extern unsigned int D_00177A04;
extern int func_023BC8(unsigned int);
extern void func_097560(int);
void func_03E948(int amount) {
 if(func_023BC8(6)) *(unsigned int *)(D_00148C2C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_00148C2C+0x1C68)+=amount;
 func_097560(90);
 D_00177A04+=amount;
 if(*(unsigned int *)(D_00148C2C+0x1C68)>99999999) *(unsigned int *)(D_00148C2C+0x1C68)=99999999;
}
