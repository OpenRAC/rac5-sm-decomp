/* LEVEL_16.REL:0x1135D0: reviewed 128-byte candidate, held for ABI review.
 * Returns 1 when the slot is busy or its bit is clear in the active table.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_112E00 returning int with (int), but the accepted
 * LEVEL_16_112E00.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_112E00(int a0);
extern int D_001D04A0;
extern int D_001B4C2C;
extern int D_001B4C28;
extern char D_001B8210[];

int func_1135D0(int a0)
{
	unsigned int slot;
	unsigned int mask;
	unsigned int idx;
	unsigned int *p;

	slot = (unsigned int)a0 & 0xFF;
	if (func_112E00(a0) == 0) {
		mask = 1u << slot;
		idx = (D_001B4C2C << 2) + (D_001B4C28 << 3) + (D_001D04A0 - 16) * 24;
		p = (unsigned int *)(D_001B8210 + idx);
		return (*p & mask) == 0;
	}
	return 1;
}
