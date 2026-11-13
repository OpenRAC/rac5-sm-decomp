/* Adds the award to the global counters, requests a 90-unit timer, and
 * clamps the total. The timer wrapper uses its recovered integer domain. */
typedef struct { char pad[0x1C68]; unsigned int count; } Global;
extern char *D_002082AC;
extern unsigned int D_00245184;
extern int func_02A730(unsigned int);
extern void func_0B90B0(int);
void func_04DBE0(int amount) {
 if(func_02A730(6)) *(unsigned int *)(D_002082AC+0x1C68)+=(unsigned int)amount*2;
 else *(unsigned int *)(D_002082AC+0x1C68)+=amount;
 func_0B90B0(90);
 D_00245184+=amount;
 if(*(unsigned int *)(D_002082AC+0x1C68)>99999999) *(unsigned int *)(D_002082AC+0x1C68)=99999999;
}
