/* USA FRONTEND:01F460, 236-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 236 bytes: 23 differing words; first difference +0x3C. No matching credit.
 * Remaining issue: draft was the LEVEL_01:131D90 twin with wrong semantics (retail returns the
 * header on the flag-4 and relocated paths, 0 only when func_01F150 fails); rewritten with the
 * int *p buffer parameter (prologue and flag reloads now match) and one return r; left: sched2
 * puts fl = &r->flags last in the block, so reorg steals r = 0 into a beql instead of filling
 * beqz with fl, and the loop then gets a .align nop (23 w, 24 w at LEVEL_01:131D90)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* FRONTEND:0x01F460 -- opens a packed resource: clears the descriptor, validates the header, records the entry count and, for a not-yet-relocated resource, adds its base to every entry pointer before marking it relocated; returns the header on a cached hit and 0 otherwise. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    int w0;
    unsigned int flags;
    int w8;
    unsigned int wC;
    int tab[1];
} Hdr;

typedef struct {
    Hdr *hdr;
    unsigned int count;
    int w8;
} Desc;

extern int func_01F150(Hdr *h);
extern int func_01F338(Desc *d);

Hdr *func_01F460(Desc *d, int *p)
{
    unsigned int n;
    unsigned int i;
    unsigned int odd;
    unsigned int *fl;
    Hdr *r;

    memset(d, 0, 0xC);
    r = (Hdr *)p;
    if (func_01F150(r) != 0) {
        fl = &r->flags;
        d->hdr = r;
        n = r->wC;
        odd = r->flags & 1;
        d->count = n;
        if ((r->flags & 4) != 0) {
            r->flags |= 2;
        } else {
            d->w8 = 0;
            p = &r->tab[0];
            if (odd) {
                p = &r->tab[1];
            }
            if (func_01F338(d) == 0) {
                for (i = 0; i < n; i++) {
                    *p = (int)r + *p;
                    p += 2;
                }
                *fl |= 2;
            }
        }
    } else {
        r = 0;
    }
    return r;
}
