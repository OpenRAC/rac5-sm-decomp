/* LEVEL_16:0x0731F0 -- for an object whose record type is 1, returns the helper result as a float (converted unsigned for kind 3, signed for kind 2), else 0. */
extern int func_06FA78(void);
float func_0731F0(char *o,int type)
{
 if(o && *(unsigned char *)(*(char **)(o+0x40)+0x3f)==1){
  if(type==3)return (float)((unsigned int (*)(char *))func_06FA78)(o);
  if(type==2)return (float)((int (*)(char *))func_06FA78)(o);
 }
 return 0;
}
