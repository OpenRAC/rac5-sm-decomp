/* USA LEVEL_15.REL:0x13BA48, 164-byte candidate.
 * Representative measured with gnu-ee-trial/gnu-ee-trial: 164 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
typedef struct Link {struct Link *prev,*next;} Link;
typedef struct X {char pad[0xc4];unsigned int refs;char p[12];Link node;} X;
typedef struct Y {char p[12];Link **head;} Y;
extern void func_13B338(X *);
extern X *func_13B390(Y *,float,float);
void func_13BA48(void *unused,X **slot,Y *owner,float a,float b)
{
 X *x;Link **head;
 if(*slot)func_13B338(*slot);
 head=owner->head;
 x=func_13B390(owner,a,b);
 if(x){Link *n=&x->node,*p=*head,*next=p->next; n->prev=p;n->next=next;next->prev=n;p->next=n;x->refs++;*slot=x;}
 else *slot=0;
}
