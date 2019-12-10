import maplib
#This is kinda hacky but it works

print("Original Map Address?")
originalMap = input()

print("New Map Address?")
newMap = input()

print('''
Choose Conversion Type
1. Node-Vertex To Matrix
2. Matrix To Node-Vertex
''')

chooseType = input()
if(chooseType == "1"):
    temp = maplib.NVMap(file = originalMap, importData=True)
    new = maplib.convertNodeVertexToMatrix(temp, file = newMap)
    new.saveInfo()

elif(chooseType == "2"):
    temp = maplib.MatrixMap(file = originalMap, importData=True)
    new = maplib.convertMatrixToNodeVertex(temp, file = newMap)
    new.saveInfo()