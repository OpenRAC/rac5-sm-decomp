/* LEVEL_10:0x18B660 -- two-step state: waits for a pad bit and a successful probe, then shows the fade, flags the owner and releases the object. */
typedef struct {
    int target;
    char *owner;
} Link;

typedef struct {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x0E];
    Link *link;
} Obj;

typedef struct Fx Fx;

extern Fx D_0023E540;
extern unsigned int func_017918(void);
extern int func_084D08(int target, char *at);
extern void func_0A7118(int a, int color, int w, int h, int kind, int z);
extern int func_0A7150(int a);
extern void func_04A5B0(Fx *fx, Obj *o);
extern void func_07CCA0(Obj *o, int flag);

void func_18B660(Obj *o)
{
    Link *link = o->link;
    char *at;

    switch (o->state) {
    case 0:
        if ((func_017918() & 0x4000000) != 0) {
            at = (char *)&D_0023E540;
            at += 0x30;
            if (func_084D08(link->target, at) != 0) {
                o->state = 1;
            }
        }
        break;
    case 1:
        func_0A7118(0, 0xFF000000, 0x20, 0x20, 3, 0);
        if (func_0A7150(0) != 0) {
            *(unsigned int *)(link->owner + 0x64) |= 0x200000;
            func_04A5B0(&D_0023E540, o);
            func_07CCA0(o, 1);
        }
        break;
    }
}
