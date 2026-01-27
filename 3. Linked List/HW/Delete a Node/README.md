# Delete a Node

Този документ съдържа инструкции за задачите "Merge two sorted linked lists" и "Delete a Node".

---

## 1. Merge two sorted linked lists

Дадени са указатели (pointers) към началните възли (heads) на два сортирани свързани списъка. Слейте ги в един общ, сортиран свързан списък. Всеки от началните указатели може да бъде `null`, което означава, че съответният списък е празен.

### Example
* **headA** сочи към: $1 \to 3 \to 7 \to NULL$
* **headB** сочи към: $1 \to 2 \to NULL$
* **Новият списък е**: $1 \to 1 \to 2 \to 3 \to 7 \to NULL$


### Function Description
Завършете функцията `mergeLists` със следните параметри:
* **SinglyLinkedListNode pointer headA**: референция към началото на първия списък.
* **SinglyLinkedListNode pointer headB**: референция към началото на втория списък.

**Returns**
* **SinglyLinkedListNode pointer**: референция към началния възел на слетия списък.

### Input Format
* Първият ред съдържа цяло число $t$, броят на тестовите случаи.
* За всеки тестов случай:
    * Цяло число $n$, дължината на първия списък.
    * $n$ реда с елементите на първия списък.
    * Цяло число $m$, дължината на втория списък.
    * $m$ реда с елементите на втория списък.

### Constraints
* $1 \le t \le 10$
* $1 \le n, m \le 1000$
* $1 \le list[i] \le 1000$

### Sample Input
```text
1
3
1
2
3
2
3
4
```
### Sample Output
```text
1 2 3 3 4
```
