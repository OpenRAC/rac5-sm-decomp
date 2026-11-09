/* LEVEL_16.REL:0x13CD10: reviewed 128-byte candidate, held for ABI review.
 * Clears a pending handle, sets two status bits and tears down when not
 * persisting.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_16BF68 returning void with (int), but the accepted
 * LEVEL_16_16BF68.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_16BF68(int handle);
extern void func_15D478(char *obj, int handle);
extern void func_186528(char *global, char *obj);
extern char D_002E49A8[];

void func_13CD10(char *a0, int a1, int a2)
{
	char *s1;

	s1 = *(char **)(a0 + 0x54);
	if (*(int *)(s1 + 0x10)) {
		func_16BF68(*(int *)(s1 + 0x10));
	}
	*(int *)(a0 + 0x64) |= 0x200020;
	func_15D478(a0, *(int *)(s1 + 0x10));
	*(int *)(s1 + 0x10) = 0;
	if (!a2) {
		func_186528(D_002E49A8, a0);
	}
}
