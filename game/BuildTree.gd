extends Tree


# Called when the node enters the scene tree for the first time.
func _ready():
	var root: TreeItem = create_item()
	root.set_text(0,"Tree - Root")
	var child1: TreeItem = create_item(root)
	child1.set_text(0, "Tree - Child 1")
	var child2: TreeItem = create_item(root)
	child2.set_text(0, "Tree - Child 2")
	var subchild1: TreeItem = create_item(child1)
	subchild1.set_text(0, "Tree - Subchild 1")
