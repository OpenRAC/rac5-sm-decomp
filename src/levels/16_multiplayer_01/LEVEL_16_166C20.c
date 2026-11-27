/* LEVEL_16:0x166C20 -- releases the attached effect (and its owner link when the other object asks), flags the object, records the other object and starts the shared effect when it is loaded. */
typedef struct Info { char pad[0x14]; float f14; float f18; float f1C; float f20; } Info;
typedef struct Slot { void *eff; char pad4[0x38]; void *other; } Slot;
typedef struct Obj { char pad0[0x45]; char f45; char pad46[0x58 - 0x46]; Slot *p58; char pad5C[8]; unsigned int flags; } Obj;
extern Info *D_001BE018;
extern void func_168998(void *obj, void *out);
extern void func_038148(void *e);
extern int func_168B80(void *obj);
extern void func_1172E0(void *e);
extern void func_073518(Obj *o, Info *sound, void **handle, int loop, int c4, int b1, unsigned char prio, int b0,
                        float f0, float f1, float f2, float f3);

void func_166C20(Obj *self, void *other)
{
    Slot *s = self->p58;
    void *e = s->eff;

    func_168998(other, self);
    if (e) {
        func_038148(e);
        if (func_168B80(other))
            func_1172E0(e);
        s->eff = 0;
    }
    *(unsigned int *)((char *)self + 0x64) |= 0x20;
    self->f45 = 4;
    s->other = other;
    if (D_001BE018 != 0)
        func_073518(self, D_001BE018, 0, 0, 0, 0, 0, 1, D_001BE018->f14, D_001BE018->f18, D_001BE018->f1C, D_001BE018->f20);
}
