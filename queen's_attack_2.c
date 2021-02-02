#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k, r, c, p, q, rt = 0, lf = 0, dn = 0, up = 0, lu = 0, ru = 0, ld = 0, rd = 0, sum = 0;
    // lf-> left,  rt->right, dn-> down, lu-> left up, ru-> right up, ld-> left down, rd-> right down;
    scanf("%d %d", &n, &k);
    scanf("%d %d", &p, &q);
    lf = q - 1;
    rt = n - q;
    dn = n - p;
    up = p - 1;
    //left up diagonal
    if (lf > up)
        lu = up;
    else
        lu = lf;

    //left down diagonal
    if (lf > dn)
        ld = dn;
    else
        ld = lf;

    //right up diagonal
    if (rt > up)
        ru = up;
    else
        ru = rt;

    //right down diagonal
    if (rt > dn)
        rd = dn;
    else
        rd = rt;

    for (int i = 1; i <= k; i++)
    {
        scanf("%d %d", &r, &c);
       if(p==r && q>c && lf>q-r-1)  //for left side obstacles
            lf=q-c-1;
        else if(p==r && q<c && rt> r-q-1)    //right side obstacles
            rt=c-q-1;
        else if(q==c && p>r && up> p-r-1) // upward obstacles
            up= p-r-1;
        else if(q==c && p<r && dn> r-p-1) // downward obstacles
            dn= r-p-1;
        
        else if(abs(p-r)==abs(q-c)){ // dioagonals condition slope =1
            if(q>c && p>r && lu> p-r-1) // left up diagonal obstacles
                lu=p-r-1;
            else if(q<c && p>r && ru> p-r-1) //right up diagonal obstacles
                ru= p-r-1;
            else if(q>c && p<r && ld> r-p-1) // left down diagonal
                ld=r-p-1;
            else if(q<c && p<r && rd> r-p-1)    // right down diagonal
                rd= r-p-1;
            

        }
        



    }

    sum = rt + lf + dn + up + lu + ld + ru + rd;

    printf("%d", sum);
}