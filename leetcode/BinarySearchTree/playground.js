class Node{
    constructor(data , left = null , right = null){
        this.data = data
        this.right = right
        this.left = left
    }
}
class BST{
    constructor(){
        this.root = null
    }
    search(data){
        let current = this.root
        while (current.data != data) {
            if (data < current.data) {
                current = current.left
            }
            else {
                current = current.right
            }
            if (current === null) {
                return null
            }
        }
        return current
    }

    search_recursive(data, current = this.root){
        if (current !== null) {
            if(data === current.data){
                return true
            }
            else if (data < current.data){
                return this.search_recursive(data , current.left)
            }
            else{
                return this.search_recursive(data , current.right)
            }
        }
        else{
            return false
        }
    }
    add(data){
        let node = this.root
        if (node === null) {
            this.root = new Node(data)
            return
        }
        else{
            let searchTree = function(node){
                if (data < node.data) {
                    if (node.left === null) {
                        node.left = new Node(data)
                        return
                    } else {
                        searchTree(node.left)
                    }
                }
                else if (data > node.data) {
                    if (node.right === null) {
                        node.right = new Node(data)
                        return
                    } else {
                        searchTree(node.right)
                    }
                }
                else{
                    return null;
                }
            }
            return searchTree(node)
        }
    }
    inorder(){
        if (this.root === null) {
            return null
        }
        else{
            var ans = new Array()
            const traverseInOrder = function(node){
                node.left && traverseInOrder(node.left)
                ans.push(node.data)
                node.right && traverseInOrder(node.right)
            }
            traverseInOrder(this.root)
            return ans
        }
    }
    preOrder() {
        if (this.root == null) {
          return null;
        } else {
          var result = new Array();
          function traversePreOrder(node) {
            result.push(node.data);
            node.left && traversePreOrder(node.left);
            node.right && traversePreOrder(node.right);
          };
          traversePreOrder(this.root);
          return result;
        };
      }
    

}
const bst = new BST();
bst.add(9);
bst.add(4);
bst.add(17);
bst.add(3);
bst.add(6);
bst.add(22);
bst.add(5);
bst.add(7);
bst.add(20);
bst.add(100)

console.log('inOrder: ' + bst.inorder());
const a = 4
console.log(bst.search(a));
console.log(bst.search_recursive(a));
