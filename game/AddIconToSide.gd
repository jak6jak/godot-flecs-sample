extends VBoxContainer

var nodeToAdd = preload("res://UINodes/FolderIcon.tscn")
# Called when the node enters the scene tree for the first time.
func _ready():
	var instance = nodeToAdd.instantiate()
	add_child(instance)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass
