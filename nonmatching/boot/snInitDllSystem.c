/* snInitDllSystem 0x01E9BAD8 (14 November 2026).
 * Measured sdk991111 as=ps2eeas: 17 differing words; first difference at
 * +0x34.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    int count;
    unsigned int magic;
} tLoadedRelmods;

typedef struct {
    char pad0[0xA];
    char kind;
    unsigned char flag;
} tModuleRec;

typedef struct {
    char pad0[0xC];
    tModuleRec *recs;
    int count;
} tNotify;

typedef struct {
    char pad0[4];
    tNotify *info;
} tNotifyRoot;

extern tLoadedRelmods SN_LOADED_RELMODS;
extern int sn_dll_header_root_01F0AD20;
extern tNotifyRoot notify;

int snInitDllSystem(int *header_out) {
    tModuleRec *r;
    int n;

    SN_LOADED_RELMODS.count = 0;
    SN_LOADED_RELMODS.magic = 0x31415926;
    if (header_out) {
        *header_out = sn_dll_header_root_01F0AD20;
    }
    n = notify.info->count;
    r = notify.info->recs;
    for (; n != 0; n--, r = (tModuleRec *)((char *)r + 0xC)) {
        if (r->kind < 0) {
            return 7;
        }
        if (r->kind < 2) {
            r->flag = 0;
        } else if (r->kind < 5) {
            r->flag = 1;
        } else {
            return 7;
        }
    }
    return 0;
}
