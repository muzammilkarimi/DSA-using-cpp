// You are a book collector aiming to sell your collection of A books. The books are arranged in a line with the ith book to the left of the (i + 1)th book for 1 <= i <= A - 1. The thickness of each book is represented by an array B (B[i] representing the thickness of the ith book) and each book has a unique thickness.

// To enhance the appeal of your books, you can apply a special protective cover to some of them. However, this cover is expensive, so you want to minimize its use while ensuring the following conditions are met:

// You should apply the protective cover to at least one book.
// If you apply the cover to the ith book, then you must also apply it to each book that is thicker than the ith book.
// There must exist at least one subarray (contiguous segment) of books of size at least C, such that the number of books with the protective cover is greater than the number of books without the cover.
// Your task is to determine the smallest number of books on which you should apply the protective cover to satisfy the above conditions.

#include <bits/stdc++.h>
using namespace std;
