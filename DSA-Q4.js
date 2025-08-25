// Merge Two Sorted Lists

// You are given the heads of two sorted linked lists list1 and list2.


function twoLists(list1,list2){
    let dummy = new ListNode(-1)
    let current = dummy;
    while(list1 && list2){
        if(list1.val<list2.val){
            current.next = list1
            list1 = list1.next;
        }else{
            current.next = list2
            list2 = list2.next
        }
        current = current.next

    }
    if(list1) current.next = list1;
    if(list2) current.next = list2;
    return dummy.next;
}
console.log(twoLists([3,2,4,1],[6,7,5]));
