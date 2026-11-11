/* LEVEL_16:0x13B9E8 -- picks a random valid index from 2..14 not in an exclusion list. */
typedef struct { char pad[0xF8]; int key; } Obj;
typedef struct { char pad[0x38]; int a; } Ent;
typedef struct { char pad[0x40]; int c; } Ent2;

extern int rand(void);
extern int func_021670(Obj *o, int i);
extern int func_0229E8(int i);
extern Ent *func_022110(int i, int k);
extern Ent2 *func_0220C8(int i, int k);
extern int func_0228B8(int i, int k);
extern int func_112BD0(int i);

unsigned char func_13B9E8(int unused, Obj *o, unsigned char *list, unsigned char n)
{
    int buf[15];
    int cnt = 0;
    unsigned char j;

    {
        int *p = buf;
        unsigned char i = 2;
        do {
            if (func_021670(o, i) && func_0229E8(i)
                && func_022110(i, o->key)->a != func_0220C8(i, o->key)->c
                && !func_0228B8(i, o->key) && func_112BD0(i)) {
                j = 0;
                if (n) {
                    do {
                        if (list[j] == i) goto s1;
                        j = j + 1;
                    } while (j < n);
                }
                *p++ = i; cnt++;
            }
s1:
            i = i + 1;
        } while (i < 15);
    }
    if (cnt == 0) {
        unsigned int k = 2;
        int *q = buf;
        do {
            if (func_021670(o, k) && func_0229E8(k)
                && !func_0228B8(k, o->key) && func_112BD0(k)) {
                j = 0;
                if (n) {
                    do {
                        if (list[j] == k) goto s2;
                        j = j + 1;
                    } while (j < n);
                }
                *q++ = k; cnt++;
            }
s2:
            k = k + 1;
        } while (k < 15);
    }
    if (cnt == 0) {
        unsigned int m = 2;
        int *r = buf;
        do {
            if (func_0229E8(m) && func_112BD0(m)) {
                j = 0;
                if (n) {
                    do {
                        if (list[j] == m) goto s3;
                        j = j + 1;
                    } while (j < n);
                }
                *r++ = m; cnt++;
            }
s3:
            m = m + 1;
        } while (m < 15);
    }
    if (cnt == 0) return 0;
    return buf[rand() % cnt];
}
