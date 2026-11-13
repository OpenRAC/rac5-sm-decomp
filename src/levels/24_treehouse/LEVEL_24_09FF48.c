/* LEVEL_24:0x09FF48 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A0218(unsigned int);
extern char *func_0A04D0(int,unsigned int,unsigned int);
extern char *func_127798(char *,char *,char *,unsigned int);
extern unsigned char D_1C756A,D_1C7569;
extern char D_2E9420[],D_2C0BF0[];
int func_09FF48(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A0218(a)||!D_1C756A)return 0;
 if(!D_1C7569)return 1;
 name=func_0A04D0(2,a,b);
 ok=func_127798(D_2E9420,name,D_2C0BF0,0x20800)!=0;
 if(ok)D_1C7569=0;
 return ok;
}
