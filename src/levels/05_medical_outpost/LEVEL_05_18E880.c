/* LEVEL_05:0x18E880 -- scans the object's 0x80-byte records (array at +0xC, count at +0x30): an active record (flag bit 0 at +0x64) whose facing (+0x20, +0x28) points at the global player position and whose planar distance (+0x30, +0x38) is under 20 blocks the player; the global flag word (+0xF10) then gets bit 0x20 set and the follow-up runs, otherwise bit 0x20 is cleared. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xF10 - 0x3C];
    long flags;
} World;

extern World D_00220E40;

extern int func_0687E8(World *w);
extern void func_0686A8(World *w, int flag);

void func_18E880(char *object)
{
    int clear;
    char *rec;
    char *end;
    float *p;
    float *pos;
    World *w;
    float d[2];

    clear = 1;
    rec = *(char **)(object + 0xC);
    end = rec + *(int *)(object + 0x30) * 0x80;
    if (rec != end) {
        p = (float *)(rec + 0x28);
        w = &D_00220E40;
        pos = w->pos;

        do {
            if ((*(unsigned int *)(p + 0xF) & 1) != 0) {
                d[0] = w->pos[0] - p[2];
                d[1] = pos[2] - p[4];
                if (0.0f < d[0] * p[-2] + d[1] * p[0]) {
                    if (d[0] * d[0] + d[1] * d[1] < 400.0f) {
                        clear = 0;
                        break;
                    }
                }
            }
            p = p + 0x20;
            rec = rec + 0x80;
        } while (rec != end);
    }
    if (clear) {
        D_00220E40.flags = D_00220E40.flags & ~0x20L;
    } else {
        D_00220E40.flags = D_00220E40.flags | 0x20L;
        if (func_0687E8(&D_00220E40)) {
            func_0686A8(&D_00220E40, 1);
        }
    }
}
