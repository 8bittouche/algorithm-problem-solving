/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public int lengthOfListNode(ListNode head){
        int len = 1;

        while(head.next != null){
            len++;
            head = head.next;
        }

        return len;
    }

    public ListNode middleNode(ListNode head) {
        int mid = lengthOfListNode(head) / 2;

        for(int i=0; i<mid; i++){
            head = head.next;
        }

        return head;
    }
}