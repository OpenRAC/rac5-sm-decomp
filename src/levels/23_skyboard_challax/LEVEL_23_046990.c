/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_001C73AC;
extern unsigned int D_001FCD04;
extern int func_027F60(unsigned int);
extern void func_0ADE18(int);
void func_046990(int amount) {
 if(func_027F60(6)) *(unsigned int *)(D_001C73AC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_001C73AC+0x1C68)+=amount;
 func_0ADE18(90);
 D_001FCD04+=amount;
 if(*(unsigned int *)(D_001C73AC+0x1C68)>99999999) *(unsigned int *)(D_001C73AC+0x1C68)=99999999;
}
