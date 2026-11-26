/* LEVEL_06:0x1ACAE0 -- handles damage/state events for a linked entity, updating health, effects, list links, and state. */
struct S58 {
    struct S58 *next;
    unsigned char pad04[0x10];
    struct S58 *prev;
    unsigned char pad18[0x20];
    unsigned char x38[0x1C];
    float hp;
    float timer;
    unsigned char pad5C[1];
    unsigned char idx5D;
    unsigned char pad5E[2];
    unsigned char kind60;
};

struct ParentElem {
    unsigned char pad00[0x18];
    unsigned char flags18;
    unsigned char pad19[3];
};

struct Parent58 {
    unsigned char pad00[0x15A];
    unsigned char flag15A;
};

struct ParentObj {
    unsigned char pad00[0x58];
    struct Parent58 *p58;
};

struct S54 {
    struct ParentObj *parent;
    unsigned char pad04[0x2C];
    void *effect30;
    unsigned char pad34[0x10];
    int flag44;
};

struct Obj1ACAE0 {
    unsigned char pad00[0x45];
    unsigned char state;
    unsigned char pad46[0xE];
    struct S54 *p54;
    struct S58 *p58;
};

struct TableEnt1ACAE0 {
    unsigned char pad00[0x10];
    void (*fn10)(void *);
    unsigned char pad14[0x8];
};

extern float D_00216470[];
extern float D_00216480[];
extern struct TableEnt1ACAE0 D_00216498[];

extern void func_076268(struct Obj1ACAE0 *obj, int a1);
extern void func_015A18(struct Obj1ACAE0 *obj, int flag, struct ParentObj *parent, int idx);
extern void func_1BA0A0(void *a0, struct Obj1ACAE0 *obj, float f0, float f1, int a2, int a3, int a4);
extern void func_1AF0A8(struct Obj1ACAE0 *obj, int state);

int func_1ACAE0(struct Obj1ACAE0 *obj, int msg, float dmg, int a2, int a3, int a4, int a5)
{
    unsigned char st = obj->state;
    struct S54 *p54 = obj->p54;
    struct S58 *p58 = obj->p58;

    if (st == 0x14 || st == 0x15 || st == 0x19) {
        if (msg != 7) {
            return 1;
        }
    }

    if (msg == 0xA) {
    destroy_only:
        if (p54->effect30 != 0) {
            ((struct TableEnt1ACAE0 *)((char *)D_00216498 + p58->kind60 * 0x1C))->fn10(p54->effect30);
            p54->effect30 = 0;
        }
        func_076268(obj, 1);
        return 3;
    }

    if (msg == 6 && p58->hp > 0.0f) {
        func_015A18(obj, 1, p54->parent, p58->idx5D);
    } else if (msg == 7) {
        func_015A18(obj, 0, p54->parent, p58->idx5D);
    }

    p54->parent->p58->flag15A = 1;
    if (p54->flag44 != 0) {
        return 1;
    }

    p58->hp -= dmg;
    if (p58->hp <= 0.0f) {
        func_015A18(obj, 0, p54->parent, p58->idx5D);
        if (msg == 0xB) {
            goto destroy_only;
        }
        func_015A18(obj, 0, p54->parent, p58->idx5D);
        if (p54->effect30 != 0) {
            ((struct TableEnt1ACAE0 *)((char *)D_00216498 + p58->kind60 * 0x1C))->fn10(p54->effect30);
            p54->effect30 = 0;
        }
        if (p54->parent != 0) {
            unsigned char *p = (unsigned char *)p54->parent->p58;
            p += p58->idx5D * 0x1C;
            p[0x18] &= ~4;
        }
        func_1BA0A0(p58->x38, obj, D_00216470[a2], D_00216480[a2], a3, a4, a5);
        if (p58->prev != 0) {
            p58->prev->next = p58->next;
            if (p58->next != 0) {
                p58->next->prev = p58->prev;
            }
            p58->prev = 0;
        }
        func_1AF0A8(obj, 0x14);
        return 3;
    }

    if (p58->timer >= 1.5f) {
        st = obj->state;
        if (st != 0x18 && a2 != 0 && st != 0x1E && st != 0xC) {
            func_1AF0A8(obj, 0x18);
            p58->timer = 0.0f;
        }
    }
    return 2;
}
