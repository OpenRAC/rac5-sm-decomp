/* LEVEL_08:0x0B0FC8 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0B1298(unsigned int);
extern char *func_0B1550(int,unsigned int,unsigned int);
extern char *func_1431D0(char *,char *,char *,unsigned int);
extern unsigned char D_23F7AA,D_23F7A9;
extern char D_36C7E0[],D_343FB0[];
int func_0B0FC8(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0B1298(a)||!D_23F7AA)return 0;
 if(!D_23F7A9)return 1;
 name=func_0B1550(2,a,b);
 ok=func_1431D0(D_36C7E0,name,D_343FB0,0x20800)!=0;
 if(ok)D_23F7A9=0;
 return ok;
}
