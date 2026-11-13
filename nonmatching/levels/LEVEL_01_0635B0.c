/* USA LEVEL_01.REL:0x0635B0, 120-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 116 linked bytes; first differing word +0x2C.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct { void *handle; } Link;
typedef struct { char pad[0x54]; Link *link; } Item;
typedef struct { char pad[0x59C]; unsigned int value; char gap[0x14]; Item *item; char gap2[0xA18]; unsigned char mode; char gap3; unsigned int saved; } Obj;
extern unsigned int D_0021A7F0;
extern char *D_00239184;
extern int func_0A6A70(unsigned int,unsigned int);
extern void func_17BD28(char *);
extern void func_18D2E0(void);
void func_0635B0(Obj *o) {
 func_0A6A70(D_0021A7F0,0);
 if(D_00239184) func_17BD28(D_00239184);
 *(unsigned int *)((char *)o+0xFE0)=o->value;
 *((unsigned char *)o+0xFDE)=2;
 if(o->item->link->handle) func_18D2E0();
}
