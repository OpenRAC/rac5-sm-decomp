/* LEVEL_01:0x0D92F8 -- appends one 64-byte record with sixteen int fields to the object's pool unless the pool is full. */

typedef struct {
    char used_00;
    char pad_01[3];
    int f_04;
    int f_08;
    int f_0C;
    int f_10;
    int f_14;
    int f_18;
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    int f_2C;
    int f_30;
    int f_34;
    int f_38;
    int f_3C;
} Ent;

typedef struct {
    Ent *ents_00;
    char pad_04[0xC4];
    int full_C8;
    int count_CC;
} Pool;

int func_0D92F8(Pool *p, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                int s0, int s1, int s2, int s3, int s4, int s5, int s6, int s7)
{
    if (p->full_C8 != 0) {
        return 0;
    }
    p->ents_00[p->count_CC].used_00 = 1;
    p->ents_00[p->count_CC].f_24 = s1;
    p->ents_00[p->count_CC].f_28 = s2;
    p->ents_00[p->count_CC].f_2C = s3;
    p->ents_00[p->count_CC].f_30 = s4;
    p->ents_00[p->count_CC].f_34 = s5;
    p->ents_00[p->count_CC].f_38 = s6;
    p->ents_00[p->count_CC].f_3C = s7;
    p->ents_00[p->count_CC].f_04 = a1;
    p->ents_00[p->count_CC].f_08 = a2;
    p->ents_00[p->count_CC].f_0C = a3;
    p->ents_00[p->count_CC].f_10 = a4;
    p->ents_00[p->count_CC].f_14 = a5;
    p->ents_00[p->count_CC].f_18 = a6;
    p->ents_00[p->count_CC].f_1C = a7;
    p->ents_00[p->count_CC].f_20 = s0;
    p->count_CC = p->count_CC + 1;
    return 1;
}
