/* USA LEVEL_04.REL:0x1DDCF8, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; first differing word +0x5C.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
extern void func_080188(char *,int,int,int,float,float);
extern void func_033B20(char *);
extern void func_033E88(char *,int);
typedef struct V {char p[20];int (*call)(char *,void *);} V;
typedef struct Sub {V *v;} Sub;
void func_1DDCF8(char *o)
{
 char *d=*(char **)(o+0x58);char *child;Sub *sub;
 d[0x10c]=4;
 func_080188(o,4,0,1,0.15f,0);
 func_033B20(o);func_033E88(o,2);
 child=*(char **)d;sub=*(Sub **)(child+0x58);
 sub->v->call(child,sub);
}
