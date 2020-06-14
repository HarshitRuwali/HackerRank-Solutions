import xml.etree.ElementTree as etree

maxdepth = 0
def depth(elem, level):
    global maxdepth #DFS
    level += 1
    [depth(element, level) for element in elem.getchildren()]
    maxdepth = level if level > maxdepth else maxdepth
    return maxdepth

if __name__ == '__main__':
    n = int(input())
    xml = ""
    for i in range(n):
        xml =  xml + input() + "\n"
    tree = etree.ElementTree(etree.fromstring(xml))
    depth(tree.getroot(), -1)
    print(maxdepth)