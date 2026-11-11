/* LEVEL_17:0x1373F8 -- placement copy of LEVEL_16_13B9E8.c: picks a random valid index from 2..14 not in an exclusion list. */
typedef struct { char pad[0xF8]; int key; } Obj;
typedef struct { char pad[0x38]; int a; } Ent;
typedef struct { char pad[0x40]; int c; } Ent2;

extern int rand(void);
extern int func_020FF0(Obj *o, int i);
extern int func_022368(int i);
extern Ent *func_021A90(int i, int k);
extern Ent2 *func_021A48(int i, int k);
extern int func_022238(int i, int k);
extern int func_112360(int i);

unsigned char func_1373F8(int unused, Obj *o, unsigned char *list, unsigned char n)
{
    int buf[15];
    int cnt = 0;
    unsigned char j;

    {
        int *p = buf;
        unsigned char i = 2;
        do {
            if (func_020FF0(o, i) && func_022368(i)
                && func_021A90(i, o->key)->a != func_021A48(i, o->key)->c
                && !func_022238(i, o->key) && func_112360(i)) {
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
            if (func_020FF0(o, k) && func_022368(k)
                && !func_022238(k, o->key) && func_112360(k)) {
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
            if (func_022368(m) && func_112360(m)) {
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
