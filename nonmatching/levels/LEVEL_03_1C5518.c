/* USA LEVEL_03.REL:0x1C5518, 192-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 192 linked bytes; first differing word +0x4C.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern void func_080918(char *);
extern void func_0807B0(char *,char *,char **,int,int,int,int,int,float,float,float,float);
void func_1C5518(char *o,char *value)
{
 char *d;
 if(!o)return;
 d=*(char **)(o+0x58);
 if(*(float *)(d+0xd0)>0 || *(char **)(d+0xc0)==value)return;
 if(*(char **)(d+0xbc))func_080918(*(char **)(d+0xbc));
 *(char **)(d+0xc0)=value;
 if(value)func_0807B0(o,value,(char **)(d+0xbc),0,0,0,0,1,*(float *)(value+0x14),*(float *)(value+0x18),*(float *)(value+0x1c),*(float *)(value+0x20));
 *(float *)(d+0xd0)=30;
}
