/* LEVEL_01.REL:0x1C4940: reviewed 140-byte candidate, held for ABI review.
 * Searches a pointer table for a matching item.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct SC { char pad_00[0x45]; unsigned char count; char pad_46[0x0E]; void **items; } SC;
extern int func_084708(void *, void *);
void *func_1C4940(SC *c, void *key){ unsigned int i; void **p = c->items; for (i = 0; i < c->count; i++) { void *it = p[i]; if (it && func_084708(it, key)) return it; } return 0; }
