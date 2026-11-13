/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001C4C2C;
extern unsigned int D_001FB784;
extern int func_027930(unsigned int);
extern void func_0B08E0(int);
void func_046598(int amount) {
 if(func_027930(6)) *(unsigned int *)(D_001C4C2C+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001C4C2C+0x1C68)+=amount;
 func_0B08E0(90);
 D_001FB784+=amount;
 if(*(unsigned int *)(D_001C4C2C+0x1C68)>99999999) *(unsigned int *)(D_001C4C2C+0x1C68)=99999999;
}
