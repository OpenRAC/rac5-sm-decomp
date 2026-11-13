/* USA LEVEL_10.REL:0x1E2E10, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 188 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct Obj Obj;
extern void func_095BC8(Obj *,unsigned int);
extern void *memset(void *,int,unsigned int);
extern void func_018BC0(char *);
extern char D_238AF8[];
void func_1E2E10(char *o)
{
 char *d=*(char **)(o+0x58),*s=*(char **)(o+0x54),*parent,*entry;
 Obj *pool=(Obj *)((unsigned int)*(unsigned char *)(d+7)*0x68+D_238AF8);
 if(*(unsigned short *)(d+4)!=65535){func_095BC8(pool,*(unsigned short *)(d+4));*(unsigned short *)(d+4)=65535;}
 parent=*(char **)(*(char **)(s+0x30)+0x58);
 entry=parent+(unsigned int)*(unsigned char *)(d+0x69)*28;
 if(*(unsigned char *)(entry+0x18)&1)(*(unsigned char *)(parent+0x158))--;
 memset(entry,0,28);func_018BC0(o);
}
