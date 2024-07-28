class Node{
    constructor(data ,left, right){
        this.data = data
        this.left = left
        this.right = right
    }
}
class BST {
    constructor(){
        this.root = null
    }
    search(data){
        let current = this.root
        while(data != current.data){
            if(data< current.data){
                current = current.left
            }
            else if(data > current.data){
                current = current.right
            }
            if (current===null) {
                return false
            }
        }
        return true
    }

    search_recursive(data, current = this.root){
        if (current===null) {
            return false
        }
        else if(data < current.data){
            return (this.search_recursive(data,current.left))
        }
        else if(data > current.data){
            return (this.search_recursive(data,current.right))
        }
        else{
            return true
        }
    }
}