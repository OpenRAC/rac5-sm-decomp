/* LEVEL_10:0x0A77E8 -- placement copy of LEVEL_01_0A66D0.c. */
/* Requests named data through the selected name and clears the pending flag on success. Exact on the pinned route. */
extern int func_0A7AB8(unsigned int);
extern char *func_0A7D70(int,unsigned int,unsigned int);
extern char *func_12FAF8(char *,char *,char *,unsigned int);
extern unsigned char D_1FF8EA,D_1FF8E9;
extern char D_326960[],D_2FE130[];
int func_0A77E8(unsigned int a,unsigned int b)
{
 int ok;char *name;
 if(!func_0A7AB8(a)||!D_1FF8EA)return 0;
 if(!D_1FF8E9)return 1;
 name=func_0A7D70(2,a,b);
 ok=func_12FAF8(D_326960,name,D_2FE130,0x20800)!=0;
 if(ok)D_1FF8E9=0;
 return ok;
}
